//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@protocol WBSFormsMetadataProvider <NSObject>

@property (readonly, nonatomic) unsigned long long formCount;

- (void)enumerateFormsUsingBlock:(void (^)(struct OpaqueFormAutoFillFrame *, WBSFormMetadata *, BOOL *))arg1;
@end

