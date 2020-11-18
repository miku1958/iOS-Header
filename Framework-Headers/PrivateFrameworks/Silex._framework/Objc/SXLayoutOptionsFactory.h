//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutOptionsFactory-Protocol.h>

@class NSString, SXColumnCalculator, SXDocumentProvider;

@interface SXLayoutOptionsFactory : NSObject <SXLayoutOptionsFactory>
{
    SXColumnCalculator *_columnCalculator;
    SXDocumentProvider *_documentProvider;
}

@property (readonly, nonatomic) SXColumnCalculator *columnCalculator; // @synthesize columnCalculator=_columnCalculator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createLayoutOptionsWithViewportSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 traitCollection:(id)arg3 bundleSubscriptionStatus:(long long)arg4 channelSubscriptionStatus:(long long)arg5 contentSizeCategory:(id)arg6 testing:(BOOL)arg7 viewingLocation:(unsigned long long)arg8;
- (id)initWithColumnCalculator:(id)arg1 documentProvider:(id)arg2;

@end

