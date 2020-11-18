//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUIServices/NSSecureCoding-Protocol.h>

@class UIColor;

@interface SBUIRemoteAlertMaterialDescriptor : NSObject <NSSecureCoding>
{
    UIColor *_color;
    double _blurRadius;
    double _zoom;
}

@property (nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property (copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) double zoom; // @synthesize zoom=_zoom;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

