#pragma once

#include <boost/filesystem/path.hpp>

namespace bunsan{namespace testing{namespace dir
{
    const boost::filesystem::path &source();
    const boost::filesystem::path &binary();

    namespace tests
    {
        const boost::filesystem::path &source();
        const boost::filesystem::path &binary();

        namespace resources
        {
            const boost::filesystem::path &source();
            const boost::filesystem::path &binary();
        }
    }
}}}
