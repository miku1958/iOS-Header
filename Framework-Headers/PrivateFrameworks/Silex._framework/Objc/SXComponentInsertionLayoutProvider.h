//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionLayoutProvider-Protocol.h>

@class NSString, SXColumnLayout, SXLayoutBlueprint, SXLayoutDataProvider;

@interface SXComponentInsertionLayoutProvider : NSObject <SXComponentInsertionLayoutProvider>
{
    SXLayoutBlueprint *_layoutBlueprint;
    SXLayoutDataProvider *_layoutDataProvider;
}

@property (readonly, nonatomic) SXColumnLayout *columnLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGSize documentSize;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SXLayoutBlueprint *layoutBlueprint; // @synthesize layoutBlueprint=_layoutBlueprint;
@property (readonly, nonatomic) SXLayoutDataProvider *layoutDataProvider; // @synthesize layoutDataProvider=_layoutDataProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGSize viewportSize;

- (void).cxx_destruct;
- (struct CGRect)frameForComponent:(id)arg1;
- (id)initWithBlueprint:(id)arg1 layoutDataProvider:(id)arg2;
- (id)suggestedMarginForMarker:(id)arg1;

@end

