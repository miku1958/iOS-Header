//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class LPLinkMetadataPresentationTransformer, LPWebLinkPresentationProperties, NSURL;

@protocol LPLinkMetadataPresentationTransformer <NSObject>
- (BOOL)canGeneratePresentationPropertiesForURL:(NSURL *)arg1;
- (LPWebLinkPresentationProperties *)presentationPropertiesForTransformer:(LPLinkMetadataPresentationTransformer *)arg1;
@end

