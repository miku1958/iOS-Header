//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExtensionKit/NSObject-Protocol.h>
#import <ExtensionKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@protocol _EXItemProviderLoading <NSObject, NSSecureCoding>
- (void)loadItemForTypeIdentifier:(NSString *)arg1 completionHandler:(void (^)(id<NSSecureCoding>, NSError *))arg2 expectedValueClass:(Class)arg3 options:(NSDictionary *)arg4;
- (void)loadPreviewImageWithCompletionHandler:(void (^)(id<NSSecureCoding>, NSError *))arg1 expectedValueClass:(Class)arg2 options:(NSDictionary *)arg3;
@end

