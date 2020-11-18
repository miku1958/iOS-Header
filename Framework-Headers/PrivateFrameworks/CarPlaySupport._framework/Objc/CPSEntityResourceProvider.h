//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/CPEntityUpdateProviding-Protocol.h>

@class CPSTemplateEnvironment, CPTemplate, NSString;
@protocol CPEntityClientTemplateDelegate, CPEntityProviding, CPSEntityActionDelegate;

@interface CPSEntityResourceProvider : NSObject <CPEntityUpdateProviding>
{
    CPSTemplateEnvironment *_templateEnvironment;
    CPTemplate<CPEntityProviding> *_entityTemplate;
    id<CPEntityClientTemplateDelegate> _templateDelegate;
    id<CPSEntityActionDelegate> _actionDelegate;
}

@property (readonly, weak, nonatomic) id<CPSEntityActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CPTemplate<CPEntityProviding> *entityTemplate; // @synthesize entityTemplate=_entityTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<CPEntityClientTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;
@property (readonly, weak, nonatomic) CPSTemplateEnvironment *templateEnvironment; // @synthesize templateEnvironment=_templateEnvironment;

- (void).cxx_destruct;
- (id)initWithTemplateEnvironment:(id)arg1 entityTemplate:(id)arg2 templateDelegate:(id)arg3 actionDelegate:(id)arg4;
- (void)updateEntityTemplate:(id)arg1 withProxyDelegate:(id)arg2;

@end
