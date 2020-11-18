//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSVFamilyAccountPair : NSObject
{
    unsigned long long _downloaderAccountIdentifier;
    unsigned long long _familyIdentifier;
    unsigned long long _purchaserAccountIdentifier;
}

@property (readonly, nonatomic) unsigned long long downloaderAccountIdentifier; // @synthesize downloaderAccountIdentifier=_downloaderAccountIdentifier;
@property (readonly, nonatomic) unsigned long long familyIdentifier; // @synthesize familyIdentifier=_familyIdentifier;
@property (readonly, nonatomic) unsigned long long purchaserAccountIdentifier; // @synthesize purchaserAccountIdentifier=_purchaserAccountIdentifier;

- (id)initWithDownloaderAccountIdentifier:(unsigned long long)arg1 purchaserAccountIdentifier:(unsigned long long)arg2 familyIdentifier:(unsigned long long)arg3;

@end
