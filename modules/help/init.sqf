/*
 * Author: r4vn
 *
 * Description:
 * Creates some helping information about the gamemode.
 */

#include "script_component.hpp"

_subject = localize STRING_NAME("diarySubject");
_recordCaches = localize STRING_NAME("diaryRecordCaches");
_recordTickets = localize STRING_NAME("diaryRecordTickets");
_recordRallies = localize STRING_NAME("diaryRecordRallies");
_recordKits = localize STRING_NAME("diaryRecordKits");

player createDiarySubject [_subject, _subject];

player createDiaryRecord [_subject, [_recordCaches,
        localize STRING_NAME("diaryTextCaches")]];
player createDiaryRecord [_subject, [_recordTickets,
        localize STRING_NAME("diaryTextTickets")]];
player createDiaryRecord [_subject, [_recordRallies,
        localize STRING_NAME("diaryTextRallies")]];
player createDiaryRecord [_subject, [_recordKits,
        localize STRING_NAME("diaryTextKits")]];
