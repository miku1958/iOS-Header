//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BRFileObjectID.h>

@interface BRDocObjectID : BRFileObjectID
{
    unsigned int _docID;
}

+ (BOOL)supportsSecureCoding;
- (id)asString;
- (id)description;
- (id)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocID:(unsigned int)arg1;
- (id)initWithDocIDNumber:(id)arg1;
- (BOOL)isDocumentID;
- (unsigned long long)rawID;

@end

