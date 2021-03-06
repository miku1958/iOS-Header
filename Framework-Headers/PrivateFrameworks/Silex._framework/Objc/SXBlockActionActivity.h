//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivity-Protocol.h>

@class NSString, UIImage;

@interface SXBlockActionActivity : NSObject <SXActionActivity>
{
    NSString *_label;
    unsigned long long _type;
    UIImage *_image;
    CDUnknownBlockType _genericBlock;
    CDUnknownBlockType _immediateBlock;
    CDUnknownBlockType _userSelectedBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CDUnknownBlockType genericBlock; // @synthesize genericBlock=_genericBlock;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, copy, nonatomic) CDUnknownBlockType immediateBlock; // @synthesize immediateBlock=_immediateBlock;
@property (readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, copy, nonatomic) CDUnknownBlockType userSelectedBlock; // @synthesize userSelectedBlock=_userSelectedBlock;

- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 immediateBlock:(CDUnknownBlockType)arg3 userSelectedBlock:(CDUnknownBlockType)arg4;
- (void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2;

@end

