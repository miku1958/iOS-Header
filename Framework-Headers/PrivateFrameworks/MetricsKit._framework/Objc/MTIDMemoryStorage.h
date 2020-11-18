//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTIDStorage-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MTIDMemoryStorage : NSObject <MTIDStorage>
{
    NSMutableDictionary *_namespaces;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *namespaces; // @synthesize namespaces=_namespaces;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deleteNamespace:(id)arg1;
- (id)optionsForNamespace:(id)arg1 cachePolicy:(long long)arg2;
- (id)updateNamespace:(id)arg1 options:(id)arg2 resetSeed:(BOOL)arg3;

@end
