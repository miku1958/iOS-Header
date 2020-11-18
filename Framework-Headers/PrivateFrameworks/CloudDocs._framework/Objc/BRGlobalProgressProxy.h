//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BRProgressProxy.h>

#import <CloudDocs/BRProgressProxyDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRGlobalProgressProxy : BRProgressProxy <BRProgressProxyDelegate>
{
    NSString *_kind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithGlobalProgressKind:(id)arg1;
- (id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2;
- (BOOL)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2;

@end

