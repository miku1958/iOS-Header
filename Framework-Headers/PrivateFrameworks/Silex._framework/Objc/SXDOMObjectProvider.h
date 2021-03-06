//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDOMObjectProviding-Protocol.h>

@class NSString, SXComponents, SXDOM, SXJSONObjectMerger;
@protocol SXAutoPlacement, SXDocumentControllerProvider, SXDocumentStyle;

@interface SXDOMObjectProvider : NSObject <SXDOMObjectProviding>
{
    SXDOM *_DOM;
    id<SXDocumentControllerProvider> _documentControllerProvider;
    SXJSONObjectMerger *_componentStyleMerger;
    SXJSONObjectMerger *_componentTextStyleMerger;
}

@property (strong, nonatomic) SXDOM *DOM; // @synthesize DOM=_DOM;
@property (readonly, nonatomic) id<SXAutoPlacement> autoPlacement;
@property (readonly, nonatomic) SXComponents *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXDocumentStyle> documentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentLayoutForIdentifier:(id)arg1;
- (id)componentStyleForComponent:(id)arg1;
- (id)componentStyleForIdentifiers:(id)arg1;
- (id)componentTextStyleForIdentifier:(id)arg1 classification:(id)arg2 component:(id)arg3;
- (id)componentTextStyleForIdentifier:(id)arg1 component:(id)arg2;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2 component:(id)arg3;
- (id)componentTextStyleForIdentifiers:(id)arg1 component:(id)arg2;
- (id)imageResourceForIdentifier:(id)arg1;
- (id)initWithDocumentControllerProvider:(id)arg1 componentStyleMerger:(id)arg2 componentTextStyleMerger:(id)arg3;
- (id)resourceForIdentifier:(id)arg1;
- (id)textStyleForIdentifier:(id)arg1 component:(id)arg2;

@end

