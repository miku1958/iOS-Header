//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPControl-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, UIImage;
@protocol CPBarButtonDelegate;

@interface CPBarButton : NSObject <CPControl, NSSecureCoding>
{
    BOOL _enabled;
    NSUUID *_identifier;
    long long _buttonStyle;
    UIImage *_image;
    NSString *_title;
    unsigned long long _buttonType;
    CDUnknownBlockType _handler;
    id<CPBarButtonDelegate> _delegate;
}

@property (nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property (readonly, nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CPBarButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
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
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;

@end
