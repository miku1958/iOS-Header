//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXSubscriptionButtonTextProviding-Protocol.h>

@class NSString;

@interface SXSubscriptionButtonTextProvider : NSObject <SXSubscriptionButtonTextProviding>
{
    NSString *_title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1;

@end
