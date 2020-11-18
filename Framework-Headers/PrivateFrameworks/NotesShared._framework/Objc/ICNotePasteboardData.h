//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSSecureCoding-Protocol.h>

@class ICDataPersister, NSData;

@interface ICNotePasteboardData : NSObject <NSSecureCoding>
{
    NSData *_attributedStringData;
    ICDataPersister *_dataPersister;
}

@property (readonly, nonatomic) NSData *attributedStringData; // @synthesize attributedStringData=_attributedStringData;
@property (readonly, nonatomic) ICDataPersister *dataPersister; // @synthesize dataPersister=_dataPersister;

+ (id)pasteboardDataFromPersistenceData:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAttributedStringData:(id)arg1 dataPersister:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)persistenceData;

@end

