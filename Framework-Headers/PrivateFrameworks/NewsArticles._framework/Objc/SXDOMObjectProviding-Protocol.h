//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NSString, SXComponents;
@protocol SXAutoPlacement, SXComponent, SXComponentLayout, SXComponentStyle, SXDocumentStyle, SXImageResource, SXResource;

@protocol SXDOMObjectProviding <NSObject>

@property (nonatomic, readonly) id<SXAutoPlacement> autoPlacement;
@property (nonatomic, readonly) SXComponents *components;
@property (nonatomic, readonly) id<SXDocumentStyle> documentStyle;

- (id<SXComponentLayout>)componentLayoutForIdentifier:(NSString *)arg1;
- (id<SXComponentStyle>)componentStyleForComponent:(id<SXComponent>)arg1;
- (id<SXImageResource>)imageResourceForIdentifier:(NSString *)arg1;
- (id<SXResource>)resourceForIdentifier:(NSString *)arg1;
@end
