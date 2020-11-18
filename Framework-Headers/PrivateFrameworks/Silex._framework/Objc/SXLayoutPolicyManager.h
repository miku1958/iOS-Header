//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutPolicyManager-Protocol.h>

@class NSString;
@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;

@interface SXLayoutPolicyManager : NSObject <SXLayoutPolicyManager>
{
    id<SXDocumentProviding> _documentProvider;
    id<SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider; // @synthesize documentProvider=_documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider; // @synthesize hintsConfigurationOptionProvider=_hintsConfigurationOptionProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2;
- (BOOL)shouldPerformLayoutWithLayoutOptionsDiff:(unsigned long long)arg1;

@end
