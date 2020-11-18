//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class UIImage;

@interface NTKComplicationNoContentImages : NSObject <NSSecureCoding>
{
    UIImage *_modularSmallImage;
    UIImage *_utilitarianSmallImage;
    UIImage *_circularSmallImage;
}

@property (strong, nonatomic) UIImage *circularSmallImage; // @synthesize circularSmallImage=_circularSmallImage;
@property (strong, nonatomic) UIImage *modularSmallImage; // @synthesize modularSmallImage=_modularSmallImage;
@property (strong, nonatomic) UIImage *utilitarianSmallImage; // @synthesize utilitarianSmallImage=_utilitarianSmallImage;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

