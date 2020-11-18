//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMCoreUI/NSObject-Protocol.h>

@class FMAccuracyOverlay, NSString, UIColor, UIImage;

@protocol FMAnnotation <NSObject>

@property (nonatomic) CDStruct_c3b9c2ee coordinate;
@property (nonatomic) double distanceFromUser;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) BOOL isBorderEnabled;
@property (strong, nonatomic) UIImage *largeAnnotationIcon;
@property (strong, nonatomic) UIImage *largeOverlayIcon;
@property (strong, nonatomic) FMAccuracyOverlay *overlay;
@property (strong, nonatomic) UIImage *smallAnnotationIcon;
@property (strong, nonatomic) UIImage *smallOverlayIcon;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (strong, nonatomic) UIColor *tintColor;
@property (readonly, copy, nonatomic) NSString *title;

- (BOOL)hasKnownLocation;
- (BOOL)isThisDevice;

@optional
@end

