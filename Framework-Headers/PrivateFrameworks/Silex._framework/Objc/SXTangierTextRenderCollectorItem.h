//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SXTextTangierFlowInfo, SXTextTangierFlowLayout, SXTextTangierFlowStorage, SXTextTangierStorage, SXTextTangierTextLayout, UIView;
@protocol TSDRepDirectLayerHosting;

@interface SXTangierTextRenderCollectorItem : NSObject
{
    BOOL _selectable;
    SXTextTangierFlowInfo *_flowInfo;
    SXTextTangierStorage *_storage;
    SXTextTangierFlowStorage *_flowStorage;
    NSString *_componentIdentifier;
    UIView<TSDRepDirectLayerHosting> *_directLayerHost;
    SXTextTangierTextLayout *_layout;
    SXTextTangierFlowLayout *_flowLayout;
    struct _NSRange _flowRange;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;

@end

