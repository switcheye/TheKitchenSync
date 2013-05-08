/*
 * Copyright 2013 The CueConcurrency Authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "CueTaskQueue.h"

/**
 * CueDelegateByPewingPew.
 */
@protocol CueQueuePewPew <NSObject>

/**
 * Recommend calling twice.
 */
- (void)pew;

@end

/**
 * Because it absolutely had to be done.
 * This subclass serves no purpose except that it is awesome.
 */
@interface PewPewCueQueue : CueTaskQueue

/**
 * Moar pewpew.
 */
@property (assign) NSObject<CueQueuePewPew> *pewDelegate;

@end
