//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@interface IKViewElement (TVMLKitAdditions)

@property (nonatomic, getter=tv_isParsedOnce, setter=tv_setParsedOnce:) BOOL tv_parsedOnce;
@property (weak, nonatomic, setter=tv_setProxyView:) id tv_proxyView;
@property (readonly, nonatomic) long long tv_scaleMode;

+ (id)tv_approximateViewElementForView:(id)arg1;
- (id)itemElementsOfType:(unsigned long long)arg1;
- (void)retrievePresentationDocumentWithResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)tv_associatedViewElement;
- (id)tv_associatedViewElementWithDefaultClass:(Class)arg1;
- (void)tv_dispatchEvent:(id)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 targetResponder:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (unsigned long long)tv_elementType;
- (long long)tv_scaleModeWithDefaultMode:(long long)arg1;
- (long long)tv_semanticContentAttribute;
@end

