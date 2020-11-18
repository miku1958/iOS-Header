//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICachedLayout-Protocol.h>

@class NSAttributedString, NSShadow, NSString, NSStringDrawingContext;

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout>
{
    NSAttributedString *_attributedString;
    struct CGSize _boundingSize;
    NSStringDrawingContext *_context;
    double _topInset;
    BOOL _usesTallCharacterSet;
    struct UIEdgeInsets _edgeInsetsForShadow;
    NSShadow *_shadow;
}

@property (readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (readonly, nonatomic) double baselineOffset;
@property (readonly, nonatomic) struct CGSize boundingSize; // @synthesize boundingSize=_boundingSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsetsForShadow; // @synthesize edgeInsetsForShadow=_edgeInsetsForShadow;
@property (readonly, nonatomic) double firstBaselineOffset;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long numberOfLines;
@property (readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property (readonly, nonatomic) NSStringDrawingContext *stringDrawingContext; // @synthesize stringDrawingContext=_context;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;
@property (readonly, nonatomic) BOOL usesTallCharacterSet; // @synthesize usesTallCharacterSet=_usesTallCharacterSet;

- (void).cxx_destruct;
- (id)initWithLayoutRequest:(id)arg1;

@end

