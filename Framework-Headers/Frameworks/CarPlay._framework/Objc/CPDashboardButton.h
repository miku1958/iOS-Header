//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPControl-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPImageSet, NSArray, NSString, NSUUID, UIImage;
@protocol CPControlDelegate;

@interface CPDashboardButton : NSObject <CPControl, NSSecureCoding>
{
    NSUUID *_identifier;
    NSArray *_titleVariants;
    NSArray *_subtitleVariants;
    CDUnknownBlockType _handler;
    CPImageSet *_imageSet;
    id<CPControlDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CPControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) UIImage *image;
@property (strong, nonatomic) CPImageSet *imageSet; // @synthesize imageSet=_imageSet;
@property (readonly, nonatomic) NSArray *subtitleVariants; // @synthesize subtitleVariants=_subtitleVariants;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *titleVariants; // @synthesize titleVariants=_titleVariants;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)encodeWithCoder:(id)arg1;
- (void)handlePrimaryAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 image:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
