//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBDomainAttributeDataProviding-Protocol.h>

@class NSDictionary, NSString;

@interface RBDomainAttributeManagerDataProvider : NSObject <RBDomainAttributeDataProviding>
{
    NSString *_path;
    NSDictionary *_rawTemplates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)templatesByDomain;
- (id)validDomains;
- (id)validationErrors;

@end
