/* vim: set ft=objc fenc=utf-8 sw=2 ts=2 et: */
/*
 *  DOUAudioStreamer - A Core Audio based streaming audio player for iOS/Mac:
 *
 *      https://github.com/douban/DOUAudioStreamer
 *
 *  Copyright 2013 Douban Inc.  All rights reserved.
 *
 *  Use and distribution licensed under the BSD license.  See
 *  the LICENSE file for full text.
 *
 *  Authors:
 *      Chongyu Zhu <lembacon@gmail.com>
 *
 */

#if TARGET_OS_IPHONE

#import "DOUEAGL1View.h"

typedef NS_ENUM(NSUInteger, DOUAudioVisualizerInterpolationType) {
  DOUAudioVisualizerLinearInterpolation,
  DOUAudioVisualizerSmoothInterpolation
};

@interface DOUAudioVisualizer : DOUEAGL1View

@property (nonatomic, assign) NSUInteger stepCount;
@property (nonatomic, assign) DOUAudioVisualizerInterpolationType interpolationType;

@end

#endif /* TARGET_OS_IPHONE */
