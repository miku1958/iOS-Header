//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionFactory-Protocol.h>

@class NSString;
@protocol SXURLActionFactory;

@interface SXLinkActionFactory : NSObject <SXActionFactory>
{
    id<SXURLActionFactory> _URLActionFactory;
}

@property (readonly, nonatomic) id<SXURLActionFactory> URLActionFactory; // @synthesize URLActionFactory=_URLActionFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionForAddition:(id)arg1;
- (id)actionForURL:(id)arg1;
- (id)initWithURLActionFactory:(id)arg1;

@end

