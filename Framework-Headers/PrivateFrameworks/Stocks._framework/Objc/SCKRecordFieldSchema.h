//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCKRecordFieldSchema : NSObject
{
    BOOL _encrypted;
    BOOL _required;
    NSString *_name;
    Class _valueClass;
}

@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic, getter=isRequired) BOOL required; // @synthesize required=_required;
@property (strong, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 valueClass:(Class)arg2 required:(BOOL)arg3 encrypted:(BOOL)arg4;
- (BOOL)isValidRecord:(id)arg1;

@end
