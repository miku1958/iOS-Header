//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface PKRemoteThumbnailKey : NSObject <NSCopying>
{
    NSString *_requestIdentifier;
    NSDictionary *_requestDictionary;
}

@property (strong, nonatomic) NSDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property (strong, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRemoteThumbnailKey:(id)arg1;

@end
