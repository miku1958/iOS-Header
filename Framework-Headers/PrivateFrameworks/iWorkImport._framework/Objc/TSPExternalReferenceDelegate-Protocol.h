//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSUUID, TSPObject;

@protocol TSPExternalReferenceDelegate
- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(TSPObject *)arg2 objectUUIDOrNil:(NSUUID *)arg3 outComponentIsVersioned:(BOOL *)arg4;
- (TSPObject *)explicitComponentRootObjectForObject:(TSPObject *)arg1;
- (TSPObject *)objectForIdentifier:(long long)arg1;
- (BOOL)wasComponentCopied:(long long)arg1;
@end
