//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSString, UIView;

@protocol PUMutablePhotosGlobalFooterView <NSObject>

@property (strong, nonatomic) UIView *accessoryView;
@property (copy, nonatomic) CDUnknownBlockType action;
@property (copy, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property (copy, nonatomic) NSString *actionConfirmationAlertTitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSString *subtitle1;
@property (copy, nonatomic) NSString *subtitle2;
@property (copy, nonatomic) NSString *title;

@end
