//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSPDocumentRevision : NSObject <NSCopying>
{
    int _sequence;
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *revisionString;
@property (readonly, nonatomic) int sequence; // @synthesize sequence=_sequence;

+ (id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id *)arg3;
+ (id)revisionWithRevisionString:(id)arg1;
+ (id)revisionWithSequence:(int)arg1 identifier:(id)arg2;
- (void).cxx_destruct;
- (long long)compareSequenceFromRevision:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRevisionString:(id)arg1;
- (id)initWithSequence:(int)arg1 identifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)nextRevisionWithIdentifier:(id)arg1;

@end
