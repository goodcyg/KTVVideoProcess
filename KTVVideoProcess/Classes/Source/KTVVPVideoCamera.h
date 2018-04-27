//
//  KTVVPVideoCamera.h
//  KTVVideoProcessDemo
//
//  Created by Single on 2018/3/15.
//  Copyright © 2018年 Single. All rights reserved.
//

#import "KTVVPSource.h"
#import <AVFoundation/AVFoundation.h>
#import "KTVVPAudioInput.h"

@interface KTVVPVideoCamera : KTVVPSource

@property (nonatomic, strong, readonly) AVCaptureSession * captureSession;
@property (nonatomic, copy, readonly) NSError * error;

@property (nonatomic, copy) AVCaptureSessionPreset sessionPreset;       // default is AVCaptureSessionPreset1280x720.
@property (nonatomic, assign) UIInterfaceOrientation orientation;       // default is UIInterfaceOrientationPortrait.
@property (nonatomic, assign) AVCaptureDevicePosition position;         // default is AVCaptureDevicePositionFront.
@property (nonatomic, assign) BOOL horizontalFlipForFront;              // default is YES.

- (void)beginConfiguration;
- (void)commitConfiguration;


#pragma mark - Audio

@property (nonatomic, strong) id <KTVVPAudioInput> audioOutput;

@end
