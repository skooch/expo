/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

#import <ABI46_0_0React/ABI46_0_0RCTBridgeModule.h>

static CGFloat ABI46_0_0RCTSingleFrameInterval = (CGFloat)(1.0 / 60.0);

@class ABI46_0_0RCTValueAnimatedNode;

NS_ASSUME_NONNULL_BEGIN

@protocol ABI46_0_0RCTAnimationDriver <NSObject>

@property (nonatomic, readonly) NSNumber *animationId;
@property (nonatomic, readonly) ABI46_0_0RCTValueAnimatedNode *valueNode;
@property (nonatomic, readonly) BOOL animationHasBegun;
@property (nonatomic, readonly) BOOL animationHasFinished;

- (instancetype)initWithId:(NSNumber *)animationId
                    config:(NSDictionary *)config
                   forNode:(ABI46_0_0RCTValueAnimatedNode *)valueNode
                  callBack:(nullable ABI46_0_0RCTResponseSenderBlock)callback;

- (void)startAnimation;
- (void)stepAnimationWithTime:(NSTimeInterval)currentTime;
- (void)stopAnimation;
- (void)resetAnimationConfig:(NSDictionary *)config;

NS_ASSUME_NONNULL_END

@end
