//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXButtonComponentTextProvider-Protocol.h>

@class NSString;
@protocol SXSubscriptionButtonTextProviding;

@interface SXSubscriptionButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider>
{
    id<SXSubscriptionButtonTextProviding> _textProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXSubscriptionButtonTextProviding> textProvider; // @synthesize textProvider=_textProvider;

- (void).cxx_destruct;
- (id)buttonText;
- (id)initWithTextProvider:(id)arg1;

@end

