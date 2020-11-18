//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>

@class NSArray, NSProgress, NSString;

@protocol NSItemProviderWriting <NSObject>

@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (NSArray *)writableTypeIdentifiersForItemProvider;
- (NSProgress *)loadDataWithTypeIdentifier:(NSString *)arg1 forItemProviderCompletionHandler:(void (^)(NSData *, NSError *))arg2;

@optional
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(NSString *)arg1;
@end

