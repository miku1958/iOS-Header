//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString, NSURL;

@protocol ICSearchIndexFile

@property (readonly, copy, nonatomic) NSString *name;

- (void)addDocumentWithIdentifier:(NSString *)arg1 content:(NSString *)arg2 transactionId:(id *)arg3;
- (void)close;
- (BOOL)createWithURL:(NSURL *)arg1;
- (BOOL)openWithURL:(NSURL *)arg1 transactionId:(id *)arg2;
- (BOOL)opened;
- (void)removeDocumentsForIdentifiers:(NSArray *)arg1;
@end
