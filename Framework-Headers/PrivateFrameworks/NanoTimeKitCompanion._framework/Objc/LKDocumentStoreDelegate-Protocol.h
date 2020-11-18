//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class LKDocumentStore, NSDictionary;

@protocol LKDocumentStoreDelegate <NSObject>

@optional
- (void)documentStore:(LKDocumentStore *)arg1 didAddDocument:(NSDictionary *)arg2;
- (void)documentStore:(LKDocumentStore *)arg1 didModifyDocument:(NSDictionary *)arg2;
- (void)documentStore:(LKDocumentStore *)arg1 didRemoveDocument:(NSDictionary *)arg2;
@end
