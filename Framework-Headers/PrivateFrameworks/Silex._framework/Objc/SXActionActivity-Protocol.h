//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, UIImage;
@protocol SXAction;

@protocol SXActionActivity <NSObject>

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned long long type;

- (void)invokeWithAction:(id<SXAction>)arg1 invocationMethod:(unsigned long long)arg2;
@end

