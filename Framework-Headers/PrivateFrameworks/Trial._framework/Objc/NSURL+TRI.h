//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (TRI)
+ (id)triContainerURLWithPath:(id)arg1 containerId:(id)arg2 containerType:(long long)arg3;
+ (id)triParseURLFromString:(id)arg1;
+ (id)triParseURLFromString:(id)arg1 isDirectory:(BOOL)arg2;
- (BOOL)triIsContainerURL;
- (BOOL)triIsEqual:(id)arg1;
- (id)triPathAsOwner:(BOOL)arg1;
- (id)triSaveURLToString;
- (id)triURLByResolvingSymlinksInPathIncludingPrivate;
@end

