//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCChecksummingOutputStream, NSData;

@interface BRCPackageChecksummer : NSObject
{
    BRCChecksummingOutputStream *_stream;
}

@property (readonly, nonatomic) NSData *signature;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)done;
- (id)init;

@end

