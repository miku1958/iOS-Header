//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPControl-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPImageSet, NSString, NSUUID, UIImage;
@protocol CPControlDelegate;

@interface CPButton : NSObject <CPControl, NSSecureCoding>
{
    BOOL _enabled;
    NSUUID *_identifier;
    UIImage *_image;
    NSString *_title;
    CDUnknownBlockType _handler;
    CPImageSet *_imageSet;
    id<CPControlDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CPControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) CPImageSet *imageSet; // @synthesize imageSet=_imageSet;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)handlePressesEnd;
- (void)handlePressesStart;
- (void)handlePrimaryAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

