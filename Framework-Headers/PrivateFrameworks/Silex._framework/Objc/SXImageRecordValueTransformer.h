//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataRecordValueTransformer-Protocol.h>

@class NSString, SXDocumentController;

@interface SXImageRecordValueTransformer : NSObject <SXDataRecordValueTransformer>
{
    SXDocumentController *_documentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDocumentController:(id)arg1;
- (id)transformValueForRecord:(id)arg1 descriptor:(id)arg2;

@end

