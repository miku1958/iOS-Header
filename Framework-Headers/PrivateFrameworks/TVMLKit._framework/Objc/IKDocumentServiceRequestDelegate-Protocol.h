//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/IKServiceRequestDelegate-Protocol.h>

@class IKDocumentServiceRequest;

@protocol IKDocumentServiceRequestDelegate <IKServiceRequestDelegate>

@optional
- (void)documentDidChangeForDocumentServiceRequest:(IKDocumentServiceRequest *)arg1;
- (void)responseDictionaryDidChangeForDocumentServiceRequest:(IKDocumentServiceRequest *)arg1;
@end

