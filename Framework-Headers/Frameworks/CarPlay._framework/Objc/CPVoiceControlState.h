//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSArray, NSString, UIImage;

@interface CPVoiceControlState : NSObject <NSSecureCoding>
{
    BOOL _repeats;
    NSArray *_titleVariants;
    UIImage *_image;
    NSString *_identifier;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) BOOL repeats; // @synthesize repeats=_repeats;
@property (readonly, copy, nonatomic) NSArray *titleVariants; // @synthesize titleVariants=_titleVariants;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 titleVariants:(id)arg2 image:(id)arg3 repeats:(BOOL)arg4;

@end

