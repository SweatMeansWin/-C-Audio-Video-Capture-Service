#include "PreCompiled.h"

#include "Tests.h"
#include "Logging.h"

int main() {
	Log::SetReportingLevel(ELogLevel::LOGINFO);
	LogMessage("Shall we begin?");
	Test();

	return 0;
}