//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADCapService;

@interface ADParameterFactory : NSObject
{
    ADCapService *_capService;
}

@property (strong, nonatomic) ADCapService *capService; // @synthesize capService=_capService;

- (void).cxx_destruct;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)arg1;
- (id)frequencyCapDataParameter;
- (id)init;
- (id)privacyDataKeyParameter;
- (id)requestedAdDataParameter;
- (id)requestedTemplateTypeParameter;
- (id)toroClickCountDataParameter;

@end

