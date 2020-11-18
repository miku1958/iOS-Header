//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSXPCCoding-Protocol.h>

@class NSString, NSURL;

@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding>
{
    NSString *_title;
    NSString *_bundleId;
    NSURL *_URL;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2;
+ (id)systemNavigationActionContextWithTitle:(id)arg1 bundleId:(id)arg2;
+ (id)systemNavigationActionContextWithURL:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

