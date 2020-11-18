//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKAppBrowserBridge, IKHeaderElement, NSArray;

@interface IKCollectionElement : IKViewElement
{
    NSArray *_sections;
    IKAppBrowserBridge *_browserBridge;
}

@property (readonly, nonatomic) IKAppBrowserBridge *browserBridge; // @synthesize browserBridge=_browserBridge;
@property (readonly, strong, nonatomic) IKHeaderElement *header;
@property (readonly, strong, nonatomic) NSArray *sections;

+ (id)supportedFeaturesForElementName:(id)arg1;
- (void).cxx_destruct;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
