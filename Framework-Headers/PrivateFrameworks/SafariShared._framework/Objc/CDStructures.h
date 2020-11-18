//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BookmarkAndHistoryCompletionMatch;

struct CGSize {
    double width;
    double height;
};

struct CoalescedAsynchronousWriter;

struct FrameMetadata {
    CDUnknownFunctionPointerType *_field1;
    struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow, 16> _field2;
    struct OpaqueJSValue *_field3;
    struct OpaqueJSValue *_field4;
    struct OpaqueJSContext *_field5;
    id _field6;
    id _field7;
};

struct HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>> {
    struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> m_impl;
};

struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> {
    struct KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>> *m_table;
    unsigned int m_tableSize;
    unsigned int m_tableSizeMask;
    unsigned int m_keyCount;
    unsigned int m_deletedCount;
};

struct HistoryURLCompletionItem {
    struct atomic<int> _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>> _field5;
    struct HistoryURLCompletionItem *_field6;
    id _field7;
    id _field8;
    double _field9;
    int _field10;
    struct vector<int, std::__1::allocator<int>> _field11;
    struct vector<int, std::__1::allocator<int>> _field12;
    id _field13;
    BOOL _field14;
    BOOL _field15;
};

struct KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>;

struct OpaqueJSContext;

struct OpaqueJSValue;

struct PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> {
    struct BookmarkAndHistoryCompletionMatch *_field1;
};

struct RawData {
    BOOL _field1;
    void *_field2;
    int _field3;
};

struct Ref<SafariShared::HistoryURLCompletionItem> {
    struct HistoryURLCompletionItem *_field1;
};

struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> {
    struct BookmarkAndHistoryCompletionMatch *m_ptr;
};

struct RefPtr<SafariShared::HistoryURLCompletionItem> {
    struct HistoryURLCompletionItem *m_ptr;
};

struct RetainPtr<_OpaquePCSShareProtection *> {
    void *m_ptr;
};

struct RetainPtr<_PCSIdentitySetData *> {
    void *m_ptr;
};

struct RetainPtr<const __CFData *> {
    void *m_ptr;
};

struct RetainPtr<const __CTFontDescriptor *> {
    void *_field1;
};

struct SuddenTerminationDisabler;

struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow, 16> {
    struct OpaqueJSValue **_field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16> {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> *_field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct Vector<double, 0, WTF::CrashOnOverflow, 16> {
    double *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> {
    id *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<int, 0, WTF::CrashOnOverflow, 16> {
    int *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct atomic<int> {
    _Atomic int _field1;
};

struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long __rep_;
};

struct duration<long long, std::__1::ratio<1, 1000>> {
    long long __rep_;
};

struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> __d_;
};

struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter>> {
    struct __compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter>> {
        struct CoalescedAsynchronousWriter *__first_;
    } __ptr_;
};

struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> {
    struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> {
        struct SuddenTerminationDisabler *__first_;
    } __ptr_;
};

struct unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>>> {
    struct __compressed_pair<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>*, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>>> {
        struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>> *__first_;
    } __ptr_;
};

struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>> {
    RefPtr_84e65dc2 *_field1;
    RefPtr_84e65dc2 *_field2;
    struct __compressed_pair<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>*, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>> {
        RefPtr_84e65dc2 *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct {
        unsigned short _field1;
        unsigned short _field2;
    } _field1[32];
    unsigned long long _field2;
} CDStruct_f2b84ca7;

// Template types
typedef struct PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> {
    struct BookmarkAndHistoryCompletionMatch *_field1;
} PassRefPtr_8dece646;

typedef struct Ref<SafariShared::HistoryURLCompletionItem> {
    struct HistoryURLCompletionItem *_field1;
} Ref_06e40557;

typedef struct RefPtr<SafariShared::HistoryURLCompletionItem> {
    struct HistoryURLCompletionItem *m_ptr;
} RefPtr_84e65dc2;

typedef struct RetainPtr<const __CTFontDescriptor *> {
    void *_field1;
} RetainPtr_887fe677;

typedef struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>, 0, WTF::CrashOnOverflow, 16> {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> *_field1;
    unsigned int _field2;
    unsigned int _field3;
} Vector_c2be5503;

typedef struct Vector<double, 0, WTF::CrashOnOverflow, 16> {
    double *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector_23cb8338;

typedef struct duration<long long, std::__1::ratio<1, 1000>> {
    long long __rep_;
} duration_6174cf92;

typedef struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> __d_;
} time_point_e708cccf;

typedef struct unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>>> {
    struct __compressed_pair<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>*, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>>> {
        struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>> *__first_;
    } __ptr_;
} unique_ptr_89909796;

