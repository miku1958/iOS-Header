//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/UAPasteboardItemProviding-Protocol.h>

@class NSString;

@protocol UAPasteboardFileItemProviding <UAPasteboardItemProviding>

@property (nonatomic) BOOL preferFileRep;

- (void)getDataFileWithCompletionBlock:(void (^)(NSURL *, NSError *))arg1;
- (NSString *)getFileName;
@end

