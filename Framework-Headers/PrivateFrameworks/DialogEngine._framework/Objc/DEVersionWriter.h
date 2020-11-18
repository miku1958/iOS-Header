//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@class NSData;

@interface DEVersionWriter : NSObject <DEWriter>
{
    NSData *_version;
    struct CC_SHA256state_st _context;
}

@property (nonatomic) struct CC_SHA256state_st context; // @synthesize context=_context;
@property (strong, nonatomic) NSData *version; // @synthesize version=_version;

+ (id)dataWithHexString:(id)arg1;
+ (id)getURLFor:(id)arg1 version:(id)arg2 base:(id)arg3;
+ (BOOL)prepareDirsFor:(id)arg1;
+ (id)versionData:(id)arg1;
+ (id)versionFile:(id)arg1;
+ (id)versionString:(id)arg1;
+ (id)versionToString:(id)arg1;
- (void).cxx_destruct;
- (void)close;
- (id)init;
- (void)writeData:(id)arg1;

@end
